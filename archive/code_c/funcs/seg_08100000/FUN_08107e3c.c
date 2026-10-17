// undefined FUN_08107e3c(void)
// entry 0x8107e3c


undefined4 FUN_08107e3c(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (7 < *(byte *)(param_1 + 0xb5)) {
      *(byte *)(param_1 + 0xb5) = *(char *)(*(int *)(param_1 + 0x28) + 0xb5) + 1;
    }
    *(undefined1 *)(param_1 + 0xb6) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar3 = (byte *)(param_1 + 0xb5);
  if ((*pbVar3 != 0) && (iVar2 = *(int *)(param_1 + 0x28), iVar2 != 0)) {
    if (*(byte *)(iVar2 + 0xc) < 2) {
      if (*(char *)(iVar2 + 0xd) == '\x01') {
        *pbVar3 = *(char *)(iVar2 + 0xb5) + 1;
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
      else {
        uVar1 = *(byte *)(iVar2 + 0xb5) + 1;
        if (uVar1 == *pbVar3) {
          return in_lr;
        }
        *pbVar3 = (byte)uVar1;
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    else {
      *pbVar3 = *(byte *)(iVar2 + 0xb5);
      if (*(char *)(*(int *)(param_1 + 0x28) + 0xb4) == '\x01') {
        FUN_081080bc(param_1);
      }
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28);
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


