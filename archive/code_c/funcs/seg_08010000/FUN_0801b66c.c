// undefined FUN_0801b66c(void)
// entry 0x801b66c


undefined4 FUN_0801b66c(int param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar1 = DAT_0801b6e0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    local_10 = 0;
    local_c = 0;
    *DAT_0801b6e0 = (short)DAT_0801b6e4;
    puVar1[1] = (short)DAT_0801b6e8;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    uVar2 = FUN_080f7558(&local_10,0,0);
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 8;
  uVar3 = *(ushort *)(param_1 + 0x10) + 2;
  *(short *)(param_1 + 0x10) = (short)uVar3;
  iVar4 = ((*(short *)((uVar3 & 0xff) * 2 + DAT_0801b6ec) + 0x100 >> 5) + 0x18 >> 2) + 1;
  *(int *)(param_1 + 0x68) = iVar4;
  DAT_0801b6e0[1] = (ushort)iVar4 & 0x1f | 0x1000;
  return in_lr;
}


