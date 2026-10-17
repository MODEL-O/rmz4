// undefined FUN_0804ba10(void)
// entry 0x804ba10


undefined4 FUN_0804ba10(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804ba6c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  FUN_0801d3d0(param_1,0xf);
  FUN_0801cf00(param_1,32000);
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  bVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  uVar3 = DAT_0804bab8;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar3 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined1 *)(param_1 + 0x12) = 5;
  FUN_0804babc(param_1);
  return in_lr;
}


