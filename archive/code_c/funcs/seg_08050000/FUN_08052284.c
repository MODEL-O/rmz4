// undefined FUN_08052284(void)
// entry 0x8052284


undefined4 FUN_08052284(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  cVar3 = *(char *)(param_1 + 0xe);
  if (cVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_080522dc);
    iVar4 = *DAT_080522e0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0xd7) = *(char *)(param_1 + 0xd7) + '\x01';
    *(undefined1 *)(param_1 + 0x12) = 0x40;
  }
  else if (cVar3 == '\x01') {
    if (*(char *)(param_1 + 0x71) < '\x03') goto LAB_0805238a;
    FUN_08005784(param_1 + 0x74,DAT_0805231c);
  }
  else {
    if (cVar3 != '\x02') {
      if (*(char *)(param_1 + 0xe2) != '\0') {
        *(undefined1 *)(param_1 + 0x12) = 0;
      }
      goto LAB_0805238a;
    }
    if (*(char *)(param_1 + 0x71) < '\x06') goto LAB_0805238a;
    FUN_08002b10(0xed);
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      FUN_080c1a2c(param_1,3);
      FUN_080c1a2c(param_1,4);
      FUN_080c1a2c(param_1,5);
    }
    else {
      FUN_080c1a2c(param_1,0);
      FUN_080c1a2c(param_1,1);
      FUN_080c1a2c(param_1,2);
    }
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0805238a:
  FUN_0801cff0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xe2) = 1;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 0x15;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


