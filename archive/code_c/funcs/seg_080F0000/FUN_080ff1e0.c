// undefined FUN_080ff1e0(void)
// entry 0x80ff1e0


undefined4 FUN_080ff1e0(uint param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int unaff_r5;
  undefined4 unaff_r7;
  undefined4 in_lr;
  char in_OV;
  
  uVar2 = param_4;
  if ((in_OV == '\0') ||
     (uVar2 = (int)param_1 >> 0x1f & param_3,
     *(int *)(unaff_r5 + 0x54) < *(int *)(*piRam080ff1e4 + 0x54))) {
    uVar2 = uVar2 & 0xff;
  }
  else {
    uVar2 = uVar2 | 1;
  }
  FUN_080d4c8c(param_1 >> 2,unaff_r7,0,uVar2,param_3,param_4);
  *(byte *)(unaff_r5 + 10) = *(byte *)(unaff_r5 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(unaff_r5 + 9) * 4 + DAT_080ff218);
  *(undefined4 *)(unaff_r5 + 0xc) = 4;
  *(undefined4 *)(unaff_r5 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


