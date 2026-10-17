// undefined FUN_080fca1c(void)
// entry 0x80fca1c


undefined4 FUN_080fca1c(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  iVar1 = DAT_080fcb60;
  if (*(char *)(param_1 + 0xd) == '\0') {
    local_1c = *(int *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_080fcb5c;
    iVar6 = param_1 + 0x54;
    FUN_080d4c8c(iVar6,DAT_080fcb60,0,*(byte *)(param_1 + 10) & 0x10);
    uVar5 = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar5 = 0x10;
    }
    FUN_080d4c8c(iVar6,iVar1 + 0x1c,0,uVar5);
    FUN_080d4c8c(iVar6,iVar1 + 0x38,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(iVar6,iVar1 + 0x54,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d0c88(1,&local_1c);
    FUN_08002b10(0xa6);
    *(bool *)(param_1 + 0xe) = *(char *)(param_1 + 0xbd) != '\0';
    uVar3 = *DAT_080fcb64 * DAT_080fcb68 + DAT_080fcb6c;
    *DAT_080fcb64 = uVar3 & 0x7fffffff;
    *(byte *)(param_1 + 0xf) = (byte)(uVar3 >> 0x10) & 1;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      local_18 = *(int *)(param_1 + 0x58) + DAT_080fcb5c;
      if (*(char *)(param_1 + 0xf) == '\0') {
        local_1c = *(int *)(param_1 + 0x54) +
                   *(short *)(((uint)*(byte *)(param_1 + 0x12) * -0x24 + 0x40 & 0xff) * 2 +
                             DAT_080fcbe8) * 2 +
                   *(short *)(((uint)*(byte *)(param_1 + 0x12) * -0x24000000 >> 0x18) * 2 +
                             DAT_080fcbe8) * 2;
        FUN_080e1b14(&local_1c,*(char *)(param_1 + 0x12) * -0x24,0x200);
      }
      else {
        local_1c = *(int *)(param_1 + 0x54) +
                   *(short *)(((uint)*(byte *)(param_1 + 0x12) * 0x24000000 + 0x40000000 >> 0x17) +
                             DAT_080fcb70) * 2 +
                   *(short *)(((uint)*(byte *)(param_1 + 0x12) * 0x24000000 >> 0x17) + DAT_080fcb70)
                   * 2;
        FUN_080e1b14(&local_1c,*(char *)(param_1 + 0x12) * '$',0x200);
      }
    }
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      FUN_08002b10(0xa6);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else {
    FUN_08002b10(0x35);
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fcc0c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  }
  return in_lr;
}


