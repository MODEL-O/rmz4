// undefined FUN_080d5140(void)
// entry 0x80d5140


undefined4 FUN_080d5140(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  byte bVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  puVar2 = DAT_080d5198;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_080d5198 = *DAT_080d5198 | 0x4000;
    *(undefined1 *)((int)puVar2 + 0xd) = 0x31;
    *(byte *)(puVar2 + 7) = (byte)puVar2[7] | 0xe;
    *(undefined4 *)(param_1 + 0x78) = 0x2000;
    *(undefined1 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x75) = 0;
    *(undefined1 *)(param_1 + 0x76) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  puVar2 = DAT_080d519c;
  if ((*DAT_080d519c & 1) == 0) {
    if ((*DAT_080d519c & 2) == 0) goto LAB_080d51b2;
    iVar4 = *(int *)(param_1 + 0x78);
    iVar6 = DAT_080d51c8;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x78);
    iVar6 = 0x100;
  }
  *(int *)(param_1 + 0x78) = iVar4 + iVar6;
LAB_080d51b2:
  uVar1 = *puVar2;
  if ((uVar1 & 0x300) == 0x300) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 0x200) != 0) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -0x10;
    }
  }
  else {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x10;
  }
  bVar3 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar3;
  if ((bVar3 & 1) == 0) {
    uVar5 = 0x18;
    *(undefined1 *)(param_1 + 0x74) = 0x18;
    *(undefined1 *)(param_1 + 0x75) = 0x1f;
  }
  else {
    uVar5 = 0x1f;
    *(undefined1 *)(param_1 + 0x74) = 0x1f;
    *(undefined1 *)(param_1 + 0x75) = 0x1f;
  }
  *(undefined1 *)(param_1 + 0x76) = uVar5;
  return in_lr;
}


