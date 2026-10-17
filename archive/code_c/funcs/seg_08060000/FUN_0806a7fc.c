// undefined FUN_0806a7fc(void)
// entry 0x806a7fc


undefined4 FUN_0806a7fc(int param_1,uint param_2,uint param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = (param_2 & 0xff) + (param_3 & 0xff) * 2 * (0x140 - (param_2 & 0xff)) + 0x80;
  uVar3 = uVar2 & 0xff;
  if ((uVar3 == *(byte *)(param_1 + 0x24)) && (param_4 == '\0')) {
    return in_lr;
  }
  if (uVar3 == 0) {
    FUN_0801cc9c(param_1);
    *(char *)(param_1 + 0x4c) = (char)(param_3 & 1);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((param_3 & 1) << 4);
    if ((param_3 & 1) == 0) {
LAB_0806a8aa:
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  else {
    if (*(byte *)(param_1 + 0x24) != 0) goto LAB_0806a8b2;
    FUN_0801cd28(param_1);
    *(char *)(param_1 + 0x4c) = (char)(param_3 & 1);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((param_3 & 1) << 4);
    if ((param_3 & 1) == 0) goto LAB_0806a8aa;
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_0806a8b2:
  *(char *)(param_1 + 0x24) = (char)uVar2;
  return in_lr;
}


