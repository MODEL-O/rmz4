// undefined FUN_080fa21c(void)
// entry 0x80fa21c


undefined4 FUN_080fa21c(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  bVar4 = bVar1 & 1;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fa26c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar3 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  FUN_0801cc9c(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x1a;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  FUN_0801cf00(param_1,DAT_080fa2b4);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar5 + 0x1c);
  FUN_080fa2b8(param_1);
  return in_lr;
}


