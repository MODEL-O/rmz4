// undefined FUN_08040b3c(void)
// entry 0x8040b3c


undefined4 FUN_08040b3c(int param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar2 = *(ushort *)(iVar4 + 0x15a) & 0x20;
    if ((*(ushort *)(iVar4 + 0x15a) & 0x20) == 0) {
      if (1 < *(byte *)(iVar4 + 0xc0)) {
        return in_lr;
      }
      if (1 < *(byte *)(iVar4 + 0xc1)) {
        return in_lr;
      }
      bVar1 = *(byte *)(param_1 + 10);
    }
    else {
      bVar1 = *(byte *)(param_1 + 10);
      uVar2 = 0;
    }
    *(byte *)(param_1 + 10) = bVar1 & 0xfc;
    *(uint *)(param_1 + 0x8c) = uVar2;
    *(uint *)(param_1 + 0x90) = uVar2;
    *(char *)(param_1 + 0x94) = (char)uVar2;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08040bb0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


