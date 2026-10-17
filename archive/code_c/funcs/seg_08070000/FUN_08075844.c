// undefined FUN_08075844(void)
// entry 0x8075844


undefined4 FUN_08075844(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080758a0);
    FUN_08002b10(0xd6);
    iVar6 = *DAT_080758a4;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    FUN_08005784(param_1 + 0x74,DAT_080758cc);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0x72) < '\x02') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar6 = *(int *)(param_1 + 0x54) + *(int *)(*(char *)(param_1 + 0x71) * 4 + DAT_0807593c);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x54) - *(int *)(*(char *)(param_1 + 0x71) * 4 + DAT_08075900);
    }
    *(int *)(param_1 + 0x54) = iVar6;
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0xf) != '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 8;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x8c) & 8) != 0) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar4 = *(int *)(param_1 + 0x54);
        iVar6 = 0x100;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x54);
        iVar6 = DAT_08075960;
      }
      *(int *)(param_1 + 0x54) = iVar4 + iVar6;
      cVar3 = *(char *)(param_1 + 0x13);
      if (cVar3 == '\0') {
        uVar5 = *DAT_08075998 * DAT_0807599c + DAT_080759a0;
        *DAT_08075998 = uVar5 & 0x7fffffff;
        if (((uVar5 & 0x7fffffff) >> 0x10 & 1) != 0) {
          *(undefined1 *)(param_1 + 0xf) = 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xf) = 1;
      }
      *(undefined1 *)(param_1 + 0x12) = 0x40;
      *(char *)(param_1 + 0x13) = cVar3 + '\x01';
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      *(undefined1 *)(param_1 + 0xd) = 7;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


