// undefined FUN_080f8310(void)
// entry 0x80f8310


undefined4 FUN_080f8310(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  pcVar6 = DAT_080f8344;
  if (*(char *)(param_1 + 0x11) == '\0') {
    pcVar6 = DAT_080f8344 + -1;
  }
  cVar1 = *pcVar6;
  cVar2 = FUN_08129198(cVar1,3);
  if (cVar2 == '\x01') {
    if (*(char *)(param_1 + 0xb5) == '\0') {
      *(char *)(param_1 + 0xb5) = 'u';
      FUN_08002b10();
    }
    iVar4 = *(int *)(param_1 + 0x58) + DAT_080f8388;
    *(int *)(param_1 + 0x58) = iVar4;
    uVar5 = FUN_08129120(cVar1,3);
    uVar5 = uVar5 & 0xff;
    iVar3 = *(int *)(((uint)*(byte *)(param_1 + 0x11) * 5 + uVar5) * 8 + DAT_080f838c + 4);
    if (iVar3 <= iVar4) goto LAB_080f83e4;
  }
  else {
    if (cVar2 != '\x02') goto LAB_080f83e4;
    if (*(char *)(param_1 + 0xb5) == '\0') {
      *(char *)(param_1 + 0xb5) = 'u';
      FUN_08002b10();
    }
    iVar4 = *(int *)(param_1 + 0x58) + 0x100;
    *(int *)(param_1 + 0x58) = iVar4;
    iVar3 = FUN_08129120(cVar1,3);
    uVar5 = iVar3 + 1U & 0xff;
    iVar3 = *(int *)(((uint)*(byte *)(param_1 + 0x11) * 5 + uVar5) * 8 + DAT_080f83f4 + 4);
    if (iVar4 <= iVar3) goto LAB_080f83e4;
  }
  *(int *)(param_1 + 0x58) = iVar3;
  *pcVar6 = (char)uVar5 * '\x03';
  FUN_08002b10(DAT_080f83f8);
  *(undefined1 *)(param_1 + 0xb5) = 0;
LAB_080f83e4:
  FUN_0801cff0(param_1);
  return in_lr;
}


