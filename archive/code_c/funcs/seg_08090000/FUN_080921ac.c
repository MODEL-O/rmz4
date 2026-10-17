// undefined FUN_080921ac(void)
// entry 0x80921ac


undefined8 FUN_080921ac(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    uVar2 = 0;
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080921e4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    FUN_08092300(param_1);
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}


