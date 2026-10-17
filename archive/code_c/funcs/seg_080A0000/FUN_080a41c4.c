// undefined FUN_080a41c4(void)
// entry 0x80a41c4


undefined4 FUN_080a41c4(int param_1)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080a420c);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  local_20 = *(int *)(param_1 + 0x54);
  local_1c = *(int *)(param_1 + 0x58);
  bVar3 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  FUN_080d4c8c(&local_20,DAT_080a4210,0,bVar3);
  uVar1 = *DAT_080a4258 * DAT_080a425c + DAT_080a4260;
  *DAT_080a4258 = uVar1 & 0x7fffffff;
  bVar3 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  FUN_080d4c8c(&local_20,((uVar1 & 0x7fffffff) >> 0x10 & 1) * 0x1c + DAT_080a4264,0,bVar3);
  uVar1 = DAT_080a430c * *DAT_080a4308 + DAT_080a4310;
  local_20 = local_20 + (8 - ((uVar1 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
  uVar1 = DAT_080a430c * (uVar1 & 0x7fffffff) + DAT_080a4310;
  *DAT_080a4308 = uVar1 & 0x7fffffff;
  local_1c = local_1c + (8 - ((uVar1 & 0x7fffffff) >> 0x10 & 0xf)) * 0x100;
  FUN_080d0c88(1,&local_20);
  FUN_08002b10(0x2a);
  FUN_0802ab88(0,0xf,param_1 + 0x54);
  if (*(ushort *)(DAT_080a4314 + 0xc) <= DAT_080a4318) {
    *(ushort *)(DAT_080a4314 + 0xc) = *(ushort *)(DAT_080a4314 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a431c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


