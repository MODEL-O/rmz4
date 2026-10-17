// undefined FUN_0803a19c(void)
// entry 0x803a19c


undefined8 FUN_0803a19c(int param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  bVar3 = *(byte *)(param_1 + 0x144);
  cVar2 = FUN_0803a428(param_1,(uint)*(byte *)(param_1 + 0xc0) != (uint)bVar3);
  iVar1 = -(uint)bVar3;
  if ((iVar1 < 0) && (*(char *)(param_1 + 0xd) == '\x03')) {
    uVar4 = 0;
  }
  else {
    if ((cVar2 != '\x02') && (pcVar5 = (char *)(param_1 + DAT_0803a230), *pcVar5 == '\x03')) {
      if (*(char *)(param_1 + 0xd) == '\x03') {
        pbVar6 = (byte *)(param_1 + 0x268);
        *(byte *)(param_1 + 0x4c) = *pbVar6 & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (*pbVar6 & 1) << 4;
        if ((*pbVar6 & 1) == 0) {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
      }
      cVar2 = '\x01';
      *pcVar5 = '\0';
    }
    pcVar5 = (char *)(param_1 + DAT_0803a294);
    if (*pcVar5 == '\x06') {
      if (*(char *)(param_1 + 0xd) == '\x03') {
        pbVar6 = (byte *)(param_1 + DAT_0803a298);
        *(byte *)(param_1 + 0x4c) = *pbVar6 & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (*pbVar6 & 1) << 4;
        if ((*pbVar6 & 1) == 0) {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
      }
      cVar2 = '\x02';
      *pcVar5 = '\0';
    }
    uVar4 = FUN_0803d984(param_1,-(iVar1 >> 0x1f),cVar2);
  }
  return CONCAT44(in_lr,uVar4);
}


