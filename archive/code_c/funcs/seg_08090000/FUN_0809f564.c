// undefined FUN_0809f564(void)
// entry 0x809f564


undefined4 FUN_0809f564(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  FUN_0801ce54();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0x11) * 0x1000000 + 0xab000000 >> 0x10);
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  bVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  uVar2 = *(undefined4 *)(iVar4 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined2 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (*(char *)(param_1 + 0x11) != '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_0809f61c;
  }
  return in_lr;
}


