// undefined FUN_080ff1a0(void)
// entry 0x80ff1a0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080ff1a0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int unaff_r5;
  uint unaff_r7;
  undefined4 in_lr;
  char in_OV;
  
  param_1 = param_1 >> 2;
  if (in_OV != '\0') {
    param_1 = unaff_r7;
  }
  FUN_080d4c8c(unaff_r7);
  uVar2 = (int)-(*(byte *)(unaff_r5 + 10) & 0x20) >> 0x1f & 0x20;
  if (*(int *)(*piRam080ff1e4 + 0x54) <= *(int *)(unaff_r5 + 0x54)) {
    uVar2 = uVar2 | 1;
  }
  FUN_080d4c8c(param_1,_FUN_080ff1e0,0,uVar2,param_3,param_4);
  *(byte *)(unaff_r5 + 10) = *(byte *)(unaff_r5 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(unaff_r5 + 9) * 4 + DAT_080ff218);
  *(undefined4 *)(unaff_r5 + 0xc) = 4;
  *(undefined4 *)(unaff_r5 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


