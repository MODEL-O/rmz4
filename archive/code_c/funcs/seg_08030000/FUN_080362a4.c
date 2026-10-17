// undefined FUN_080362a4(void)
// entry 0x80362a4


undefined4 FUN_080362a4(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  bool bVar4;
  
  cVar1 = FUN_0803a428(param_1,*(char *)(param_1 + 0xc0) != '\x02');
  bVar4 = cVar1 == '\x02';
  uVar2 = *(uint *)(param_1 + 600);
  if ((uVar2 & 0x40) == 0) {
    if ((uVar2 & 0x80) == 0) {
      FUN_0801cf00(param_1,DAT_080363b4);
      *(undefined1 *)(param_1 + 0x156) = 0;
      iVar3 = DAT_080363b8;
      goto joined_r0x08036376;
    }
    FUN_0801cf00(param_1,DAT_08036358);
    *(undefined1 *)(param_1 + 0x156) = 2;
    if ((bVar4) ||
       (bVar4 = *(char *)(param_1 + DAT_0803635c) == '\x03', iVar3 = DAT_08036360, bVar4))
    goto LAB_08036384;
  }
  else {
    if ((uVar2 & 0x30) == 0) {
      FUN_0801cf00(param_1,0x2800);
      *(undefined1 *)(param_1 + 0x156) = 3;
      iVar3 = DAT_08036320;
    }
    else {
      FUN_0801cf00(param_1,DAT_080362fc);
      *(undefined1 *)(param_1 + 0x156) = 1;
      iVar3 = DAT_08036300;
    }
joined_r0x08036376:
    if (bVar4) goto LAB_08036384;
  }
  if (*(char *)(param_1 + iVar3) == '\x03') {
    bVar4 = true;
  }
LAB_08036384:
  FUN_08040664(param_1,bVar4);
  *(undefined1 *)(param_1 + DAT_080363bc) = 0xe;
  *(byte *)(param_1 + DAT_080363c0) = *(byte *)(param_1 + DAT_080363c0) & 0xf7;
  *(undefined1 *)(param_1 + DAT_080363c4) = 1;
  FUN_080363c8(param_1);
  return in_lr;
}


