// undefined FUN_08119d60(void)
// entry 0x8119d60


undefined4 FUN_08119d60(int param_1)

{
  ushort uVar1;
  char *pcVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_08119d78) == '\x02') {
    uVar1 = *DAT_08119d7c + 0x10;
    puVar3 = DAT_08119d7c;
  }
  else {
    uVar1 = *DAT_08119da4 - 0x10;
    puVar3 = DAT_08119da4;
  }
  *puVar3 = uVar1;
  *puVar3 = (ushort)DAT_08119da8 & *puVar3;
  pcVar2 = (char *)(param_1 + DAT_08119dac);
  if (*pcVar2 == '\x02') {
    uVar1 = *puVar3 + 0x20;
  }
  else {
    uVar1 = *puVar3 - 0x20;
  }
  if ((uVar1 & 0xff) == 0) {
    *(undefined1 *)(param_1 + 0xdd1) = 1;
  }
  if ((char)*puVar3 == '\0') {
    *(char *)(param_1 + DAT_08119de4) = *pcVar2;
    *(undefined1 *)(param_1 + 2) = 1;
    FUN_08119de8(param_1);
  }
  return in_lr;
}


