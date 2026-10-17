// undefined FUN_08012120(void)
// entry 0x8012120


undefined4 FUN_08012120(int param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 in_lr;
  
  iVar1 = DAT_080121cc;
  uVar3 = *(uint *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar5 = (uVar3 & 0xffff) >> 4;
    puVar7 = (ushort *)(uVar5 * 2 + DAT_080121cc);
    *puVar7 = (ushort)*(undefined4 *)(param_1 + 100) | 0x47;
    iVar6 = uVar5 * 4;
    puVar4 = (undefined4 *)(iVar6 + iVar1 + 8);
    *puVar4 = 0;
    *(undefined2 *)puVar4 = 8;
    *(undefined2 *)(iVar6 + iVar1 + 10) = 0x38;
    FUN_08128be0(*DAT_080121d0 + DAT_080121d4,(*puVar7 & 0x1f00) * 8 + 0x6000000,0x200);
    puVar7 = DAT_080121d8;
    *DAT_080121d8 = *DAT_080121d8 | 0x4000;
    *(undefined1 *)((int)puVar7 + 0xd) = 0xfb;
    puVar7[3] = 0xff;
    puVar7[5] = 0xff;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar2 = *(short *)(param_1 + 0x10) + 1;
  *(ushort *)(param_1 + 0x10) = uVar2;
  if ((uVar2 & 1) == 0) {
    FUN_08128be0(*DAT_0801220c + DAT_08012210,
                 (*(ushort *)(((uVar3 & 0xffff) >> 4) * 2 + DAT_08012214) & 0x1f00) * 8 + 0x6000000,
                 0x200);
  }
  else {
    FUN_08128be0(*DAT_080121d0 + DAT_080121d4,
                 (*(ushort *)(((uVar3 & 0xffff) >> 4) * 2 + DAT_080121cc) & 0x1f00) * 8 + 0x6000000,
                 0x200);
  }
  return in_lr;
}


