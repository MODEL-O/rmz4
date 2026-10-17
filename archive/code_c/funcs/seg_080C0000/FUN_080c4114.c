// undefined FUN_080c4114(void)
// entry 0x80c4114


undefined4 FUN_080c4114(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar2 + 10) >> 4;
  bVar5 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x138);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xb4) == '\0') goto LAB_080c416a;
  piVar4 = (int *)(param_1 + 0xb8);
  if (*piVar4 == 0) {
    iVar3 = FUN_080c3f04(param_1);
    *piVar4 = iVar3;
    if (iVar3 != 0) goto LAB_080c415c;
  }
  else {
LAB_080c415c:
    if (*(char *)(*piVar4 + 0xd) != '\x01') goto LAB_080c416a;
    *piVar4 = 0;
  }
  *(char *)(param_1 + 0xb4) = '\0';
LAB_080c416a:
  FUN_0801cff0(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
  iVar3 = DAT_080c41ec;
  if ((*(byte *)(iVar2 + 10) & 0x10) != 0) {
    iVar3 = 0x2c00;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + 0x2c00;
  if ((*(char *)(param_1 + 0xb5) != '\0') && (*(int *)(param_1 + 0xb8) == 0)) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


