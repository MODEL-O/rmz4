// undefined FUN_080dbba4(void)
// entry 0x80dbba4


undefined4 FUN_080dbba4(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 & 0xfe;
  uVar2 = DAT_080dbc38 * *DAT_080dbc34 + DAT_080dbc3c;
  local_1c = *(int *)(param_1 + 0x54) + ((bVar1 >> 4 & 1) * 2 + -1) * -0xc00 +
             (((uVar2 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  uVar2 = DAT_080dbc38 * (uVar2 & 0x7fffffff) + DAT_080dbc3c;
  *DAT_080dbc34 = uVar2 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + ((uVar2 & 0x7fffffff) >> 0x10 & 7) * 0x100 + DAT_080dbc40;
  FUN_080d0c88(2,&local_1c);
  FUN_080dbc48(param_1);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dbc44);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  return in_lr;
}


