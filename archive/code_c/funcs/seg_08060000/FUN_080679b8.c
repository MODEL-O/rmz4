// undefined FUN_080679b8(void)
// entry 0x80679b8


undefined4 FUN_080679b8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xdd) == '\0') {
      FUN_0801cf00(param_1,DAT_080679f8);
    }
    else {
      FUN_0801cf00(param_1,DAT_080679d8);
    }
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    FUN_08002b10(0x65);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x71) < '\x03'))
    goto LAB_08067a64;
    if (*(char *)(param_1 + 0xdd) == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x54) + DAT_08067a88;
        iVar3 = *(int *)(param_1 + 0x58) + DAT_08067a8c;
        uVar4 = 2;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x54) + 0x2800;
        iVar3 = *(int *)(param_1 + 0x58) + DAT_08067a40;
        uVar4 = 1;
      }
      uVar4 = FUN_080debc8(param_1,iVar2,iVar3,uVar4,0x38);
      *(undefined4 *)(param_1 + 200) = uVar4;
    }
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08067a64:
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 0x13;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


