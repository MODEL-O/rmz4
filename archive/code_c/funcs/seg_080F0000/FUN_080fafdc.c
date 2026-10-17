// undefined FUN_080fafdc(void)
// entry 0x80fafdc


undefined4 FUN_080fafdc(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  uVar1 = FUN_0801fb14(DAT_080fb00c,param_1 + 0x54);
  if (uVar1 < 0xf001) {
    if (*(char *)(param_1 + 0xb4) != '\0') {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080fb034));
    }
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fb010);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080fb17c(param_1);
  }
  return in_lr;
}


