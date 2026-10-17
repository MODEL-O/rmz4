// undefined FUN_08052188(void)
// entry 0x8052188


undefined4 FUN_08052188(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  cVar2 = *(char *)(param_1 + 0xe);
  if (cVar2 == '\0') {
    FUN_0801cf00(param_1,DAT_080521f0);
    FUN_08002b10(0xea);
    FUN_08005784(param_1 + 0x74,DAT_080521f4);
    iVar5 = *DAT_080521f8;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xcc);
  }
  else {
    if (cVar2 == '\x01') {
      uVar4 = DAT_08052228;
      if (*(char *)(param_1 + 0x71) < '\x04') goto LAB_0805224e;
    }
    else if ((cVar2 != '\x02') || (uVar4 = DAT_08052280, *(char *)(param_1 + 0x71) < '\a'))
    goto LAB_0805224e;
    FUN_08005784(param_1 + 0x74,uVar4);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805224e:
  FUN_0801cff0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xe2) = 1;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0x14;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


