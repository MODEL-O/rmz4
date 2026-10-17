# rmz4-dev 动画工作 — 续作交接

> 最后更新 2026-06-27。下次从这里接着干。

## 现状总览
rmz4(Rockman Zero 4, B4ZJ, 17MB, base 0x08000000)对齐 rmz3-dev 的 `src/data/animation` 语义,
已把 5 张动画表全部**逆向 + 解码成可读汇编/JSON(无 .bin/.incbin)+ 逐字节验证 == ROM**。

### 5 张表(全部 MATCH)
| 表 | 地址 | 数量 |
|----|------|------|
| gStaticMotionMetaspriteTable | 0x08C1C000 | 248 (247 uniq) |
| gStaticMotionCmdTable | 0x08C3C000 | 248 |
| gDynamicMotionMetaspriteTable | 0x088A7000 | 209 (153 uniq) |
| gDynamicMotionCmdTable | 0x088C7000 | 209 |
| gPlttAnimDataOffsets | 0x08C0C000 | 226 |
| gPlttAnimScriptTable | 0x08C18000 | 226 |

字节验证结果:static meta 111184 / cmd 25764,dynamic meta 126900 / cmd 17596,
palette data 49152 / script 7844 —— **全 MATCH**。

## 文件布局(已对齐 rmz3 per-motion inc+json)
- 主表(指针表 + `.include`): `src/data/animation/sprite_static.s` / `sprite_dynamic.s` / `palette.s`
- 每 motion 一目录(json 与 inc 并排):
  `src/data/graphic_table/sprites/<static|dynamic>/<id3>/` 内含
  `metasprite.inc`(label `gMetaSprite_<type>_<id>`)+ `metasprite.json`(真源)
  + `sequence.inc`(`gAnimationSequence_<type>_<id>`)+ `sequence.json`
  - 共享块只 canonical(最小 id)产真 inc,其余写 stub 注释。
- 链接脚本 `src/data/animation/animation.ld`(804 段,各放各自 ROM 基址)供验证。
- `manifest.json` 记录各表地址/数量/验证 region。

## 工具(全在 tools/)
- `export_animation_master.py` —— 动画三表导出器(metasprite+sequence,per-motion 拆分)。
  **关键坑(已修)**:MetaspriteHeader.ofs 是**块起点相对**(`sub0 = blockBase + ofs`),
  不是字段相对。早期 JSON 解错(frame1+ 子精灵全偏),已改 block-relative。
- `export_palette_animation.py` —— palette 两表 -> palette.s + 每 anim json。
- `find_pltt_anim.py` —— 调色板表定位扫描器(已命中 0x08C0C000/226)。
- `anim_viewer.html` —— **纯只读** metasprite 动画查看器(HTML+Canvas,只 fetch 不写)。
  - tile→像素映射:sheet PNG 线性瓦片,`cols = pngWidth/8`;
    obj 按 GBA OAM 1D-mapping `tileIndex = tileNum + j*(w/8) + i`;xflip/yflip 翻整 obj。
  - static 用单 `sheet.png`,dynamic 用 `<sheetIdx>.png`。

## 怎么开查看器(重要:必须走 HTTP,不能 file://)
`file://` 双击会被 CORS 拦死(fetch 本地文件被禁)。正确方式:
```
cd E:\GameProjects\rmz3\rmz4-dev
python -m http.server 8000 --bind 127.0.0.1
```
浏览器开:`http://127.0.0.1:8000/tools/anim_viewer.html`
- 默认 static/000 是个极小红色箭头光标,几乎看不见。
- **切「类型」=dynamic、motion=0** 就能看到组装好的 Zero 角色;缩放调到 6~8×。

## 工具链
`E:\GameProjects\rmz3\toolchain\arm\xpack-arm-none-eabi-gcc-15.2.1-1.1\bin`
(arm-none-eabi-as/-ld/-objcopy)。as 用 `-mthumb`,仓库根 `-I.` 以支持 `.include`。

## 待办 / 悬而未决
1. **palette/ 目录删除待确认**:`src/data/animation/palette/`(226 子目录、452 个 json)
   是 export_palette_animation.py 的冗余可读镜像;数据已全内联在 palette.s(权威、已验证),
   且无任何工具读取它。**结论:可删,等用户点头就 `rm -rf` 整个 palette/。**
2. 查看器「不显图」根因已查明 = 用户之前用 file:// 打开(CORS)。改用 http:// 即可,代码无需改。
3. (站立任务 #13,非本线)seg_08000000 逐函数 agbcc 字节匹配反编译,剩余约 344 函数。

## 验证命令(回归用)
重新生成 + 字节验证:
```
cd E:\GameProjects\rmz3\rmz4-dev
python tools/export_animation_master.py     # 重出三表 + animation.ld
python tools/export_palette_animation.py     # 重出 palette.s
```
(导出器内含/末尾的 as+ld+objcopy 逐区比对会打印 MATCH/FAIL。)
