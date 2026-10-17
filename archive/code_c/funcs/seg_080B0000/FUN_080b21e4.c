// undefined FUN_080b21e4(void)
// entry 0x80b21e4


undefined8 FUN_080b21e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*DAT_080b222c + 0x58) + DAT_080b2230;
  if ((*(int *)(param_1 + 0x58) + DAT_080b2234 < iVar2) &&
     (iVar2 < *(int *)(param_1 + 0x58) + 0x1c00)) {
    iVar2 = *(int *)(*DAT_080b222c + 0x54) - *(int *)(param_1 + 0x54) >> 8;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_080b2238)) {
      uVar1 = 1;
      goto LAB_080b223e;
    }
  }
  uVar1 = 0;
LAB_080b223e:
  return CONCAT44(in_lr,uVar1);
}


