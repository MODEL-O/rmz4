// undefined FUN_0810ba08(void)
// entry 0x810ba08


undefined4 FUN_0810ba08(int param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x28) + DAT_0810ba2c);
  if (*(char *)(param_1 + 0x11) == '\0') {
    if (*(char *)(param_1 + 0x12) != *(char *)(iVar4 + 0xf1)) {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      pcVar1 = (char *)(iVar4 + 0xf2);
    }
    else {
      pcVar1 = (char *)(iVar4 + 0xf3);
    }
    if (*(char *)(param_1 + 0x12) != *pcVar1) {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\0') {
      pbVar5 = (byte *)(iVar4 + 0xf1);
      uVar2 = (uint)*pbVar5;
      uVar3 = 0x9000;
    }
    else if (*(char *)(param_1 + 0x11) == '\x01') {
      pbVar5 = (byte *)(iVar4 + 0xf2);
      uVar2 = (uint)*pbVar5;
      uVar3 = 0x9100;
    }
    else {
      pbVar5 = (byte *)(iVar4 + 0xf3);
      uVar2 = (uint)*pbVar5;
      uVar3 = 0x9200;
    }
    FUN_0801cf00(param_1,uVar2 | uVar3);
    *(byte *)(param_1 + 0x12) = *pbVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


