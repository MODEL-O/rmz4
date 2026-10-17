// undefined FUN_080e23ac(void)
// entry 0x80e23ac


undefined4 FUN_080e23ac(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\x04') {
    FUN_080d0c88(2,param_1 + 0x54);
    FUN_080e25a8(param_1);
    FUN_080e2188(param_1 + 0x54,0x300,*(byte *)(param_1 + 10) >> 4 & 1);
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = DAT_080e23e4;
  }
  else {
    if (*(char *)(param_1 + 0x11) != '\x03') {
      FUN_080d0c88(3,param_1 + 0x54);
      goto LAB_080e241e;
    }
    FUN_080d0c88(2,param_1 + 0x54);
    FUN_080e25a8(param_1);
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = DAT_080e2410;
  }
  FUN_080e2188(param_1 + 0x54,uVar3,bVar1 >> 4 & 1);
LAB_080e241e:
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e2438);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


