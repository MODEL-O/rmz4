// undefined FUN_080356b4(void)
// entry 0x80356b4


undefined4 FUN_080356b4(int param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  pcVar6 = (char *)(param_1 + 0x102);
  if (*pcVar6 == '\0') {
    FUN_0801cf00(param_1,0x1700);
    pbVar5 = (byte *)(param_1 + DAT_080356e4);
    *pbVar5 = 0x10;
    *pcVar6 = *pcVar6 + '\x01';
  }
  else {
    FUN_0803a3b0(param_1,0x1700);
    if (*pcVar6 == '\x01') {
      pbVar5 = (byte *)(DAT_0803571c + param_1);
      if (*(char *)(param_1 + 0x72) < '\x02') {
        FUN_0803c464(param_1,4);
        *pcVar6 = *pcVar6 + '\x01';
      }
    }
    else {
      pbVar5 = (byte *)(DAT_08035798 + param_1);
      if (*(char *)(param_1 + 0x73) == '\x03') {
        *(byte *)(param_1 + DAT_0803579c) = *(byte *)(param_1 + DAT_0803579c) & 0xfd;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        *(undefined1 *)(param_1 + 0x100) = 0;
      }
    }
  }
  if (*pbVar5 != 0) {
    *pbVar5 = *pbVar5 - 1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sVar1 = FUN_080386d4(param_1);
      sVar2 = FUN_08038790(param_1);
      sVar3 = FUN_080386d4(param_1);
      iVar4 = ((int)sVar2 - (int)sVar3) * (uint)*pbVar5;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xf;
      }
      iVar4 = -(iVar4 >> 4) - (int)sVar1;
    }
    else {
      sVar1 = FUN_080386d4(param_1);
      sVar2 = FUN_08038790(param_1);
      sVar3 = FUN_080386d4(param_1);
      iVar4 = ((int)sVar2 - (int)sVar3) * (uint)*pbVar5;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xf;
      }
      iVar4 = (int)sVar1 + (iVar4 >> 4);
    }
    *(int *)(param_1 + 0x5c) = iVar4;
  }
  return in_lr;
}


