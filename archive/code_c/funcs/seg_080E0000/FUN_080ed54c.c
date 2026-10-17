// undefined FUN_080ed54c(void)
// entry 0x80ed54c


undefined4 FUN_080ed54c(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = *DAT_080ed5dc * DAT_080ed5e0 + DAT_080ed5e4;
  *DAT_080ed5dc = uVar1 & 0x7fffffff;
  uVar1 = uVar1 & 0x7fffffff;
  uVar3 = uVar1 >> 0x10;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0xd);
  if ((uVar3 & 7) == 0) {
    FUN_0801cf00(param_1,0xc);
  }
  *(byte *)(param_1 + 0x12) = ((byte)(uVar1 >> 0x10) & 7) + 0x18;
  *(uint *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       ((uVar3 & 0xf) + (int)*(char *)((uint)*(byte *)(param_1 + 0x10) + DAT_080ed5e8) + -8) * 0x100
  ;
  *(uint *)(param_1 + 0x60) = ((uVar3 & 3) + 6) * 0x40;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ed5ec);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080ed5f0(param_1);
  return in_lr;
}


