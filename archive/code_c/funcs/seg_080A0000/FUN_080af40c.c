// undefined FUN_080af40c(void)
// entry 0x80af40c


undefined4 FUN_080af40c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    if (*(byte *)(iVar2 + 0xc) < 2) {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined1 *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_080af484);
      *(undefined4 *)(iVar2 + 0xc) = 3;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
    }
    if (*(char *)(param_1 + 0xb4) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        FUN_080e4a54(param_1 + 0x54,0x100,*(byte *)(param_1 + 10) >> 4 & 1);
      }
      else {
        FUN_080e4a54(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
      }
    }
    else {
      FUN_080e4a54(param_1 + 0x54,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    if (*(ushort *)(DAT_080af4f0 + 0xc) <= DAT_080af4f4) {
      *(ushort *)(DAT_080af4f0 + 0xc) = *(ushort *)(DAT_080af4f0 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    FUN_0802ab88(4,0x11,param_1 + 0x54);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080af4f8);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


