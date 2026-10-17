// undefined FUN_0806e1a0(void)
// entry 0x806e1a0


undefined4 FUN_0806e1a0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0806e28c);
    cVar1 = FUN_0810d398(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(*DAT_0806e290 + 0x54),
                         *(int *)(*DAT_0806e290 + 0x58) + DAT_0806e294);
    *(byte *)(param_1 + 0xc0) = cVar1 + 8U & 0xf0;
    uVar2 = *DAT_0806e298 * DAT_0806e29c + DAT_0806e2a0;
    *DAT_0806e298 = uVar2 & 0x7fffffff;
    *(byte *)(param_1 + 0xc1) = (byte)(uVar2 >> 0x10) & 1;
    *(undefined4 *)(param_1 + 100) = 0x11e;
    *(uint *)(param_1 + 0x68) = (uint)*(byte *)(param_1 + 0xc1) * 2 + -1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar3 = FUN_08129050(*(undefined4 *)(param_1 + 100),0x16);
  if (iVar3 == 0) {
    FUN_08002b10(DAT_0806e2a4);
    FUN_0801cf00(param_1,DAT_0806e2a8);
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    iVar3 = FUN_08128fb8(0x11e - *(int *)(param_1 + 100),0x16);
    FUN_080bd94c(param_1,&local_14,0,
                 *(int *)(param_1 + 0x68) * iVar3 * 0x10 + 0x80 + (uint)*(byte *)(param_1 + 0xc0) &
                 0xff);
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    FUN_080e2064(&local_14,1,0);
  }
  FUN_0801cff0(param_1);
  iVar3 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar3;
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


