// undefined FUN_080b1fd8(void)
// entry 0x80b1fd8


undefined4 FUN_080b1fd8(int param_1)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b20ac);
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_08005784(param_1 + 0x74,DAT_080b20b0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar4 + 0x2a00);
  iVar4 = param_1 + 0x54;
  if ((sVar1 != 0xf) && (sVar1 != 0)) {
    if (*(ushort *)(DAT_080b20b4 + 0xc) <= DAT_080b20b8) {
      *(ushort *)(DAT_080b20b4 + 0xc) = *(ushort *)(DAT_080b20b4 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,iVar4);
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b20bc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  uVar3 = FUN_0801fb14(DAT_080b20c0,iVar4);
  if (0x4000 < uVar3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b20bc);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    if (*(ushort *)(DAT_080b20b4 + 0xc) <= DAT_080b20b8) {
      *(ushort *)(DAT_080b20b4 + 0xc) = *(ushort *)(DAT_080b20b4 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,iVar4);
  }
  return in_lr;
}


