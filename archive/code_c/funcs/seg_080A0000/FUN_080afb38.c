// undefined FUN_080afb38(void)
// entry 0x80afb38


undefined4 FUN_080afb38(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_080d0ff4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1);
    FUN_080d0ff4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500,1);
    FUN_080d0ff4(*(int *)(param_1 + 0x54) + 0x500,*(undefined4 *)(param_1 + 0x58),0);
    FUN_080d0ff4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0);
    FUN_080d0ff4(*(int *)(param_1 + 0x54) + DAT_080afbb8,*(undefined4 *)(param_1 + 0x58),0);
    iVar2 = *(int *)(param_1 + 0x2c);
    piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_080afbbc);
    *(undefined4 *)(iVar2 + 0xc) = 2;
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      FUN_080d0c88(2,param_1 + 0x54);
      FUN_080b0330(param_1);
      FUN_080e4f04(param_1 + 0x54,1,0);
    }
    else {
      FUN_080e4f04(param_1 + 0x54,0,0);
    }
    if (*(ushort *)(DAT_080afc14 + 0xc) <= DAT_080afc18) {
      *(ushort *)(DAT_080afc14 + 0xc) = *(ushort *)(DAT_080afc14 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    FUN_0802ab88(2,0xb,param_1 + 0x54);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080afc1c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


