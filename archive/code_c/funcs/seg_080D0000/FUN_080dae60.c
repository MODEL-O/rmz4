// undefined FUN_080dae60(void)
// entry 0x80dae60


undefined4 FUN_080dae60(int param_1)

{
  ushort *puVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 in_lr;
  
  puVar1 = DAT_080daec4;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_080daec4 = *DAT_080daec4 | 0x4000;
    *(undefined1 *)((int)puVar1 + 0xd) = 0x31;
    *(byte *)(puVar1 + 7) = (byte)puVar1[7] | 0xe;
    *(undefined1 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x75) = 0;
    *(undefined1 *)(param_1 + 0x76) = 0;
    *(undefined1 *)(param_1 + 0x7a) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = DAT_080daec8;
  if ((*(ushort *)(DAT_080daec8 + 6) & 0x200) == 0) {
    if ((*(ushort *)(DAT_080daec8 + 6) & 0x100) != 0) {
      iVar7 = *(byte *)(param_1 + 0x7a) + 1;
      cVar3 = (char)iVar7 + (char)(iVar7 >> 2) * -4;
      goto LAB_080daee6;
    }
  }
  else {
    iVar7 = *(byte *)(param_1 + 0x7a) + 3;
    cVar3 = (char)iVar7 + (char)(iVar7 >> 2) * -4;
LAB_080daee6:
    *(char *)(param_1 + 0x7a) = cVar3;
  }
  bVar4 = *(byte *)(param_1 + 0x7a);
  if (bVar4 == 1) {
    piVar6 = (int *)(param_1 + 100);
  }
  else {
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        piVar6 = (int *)(param_1 + 0x54);
        goto LAB_080daf14;
      }
    }
    else if (bVar4 == 2) {
      piVar6 = (int *)(param_1 + 0x5c);
      goto LAB_080daf14;
    }
    piVar6 = (int *)(param_1 + 0x7c);
  }
LAB_080daf14:
  if ((*(ushort *)(iVar2 + 6) & 0x40) != 0) {
    piVar6[1] = piVar6[1] + DAT_080daf84;
  }
  if ((*(ushort *)(iVar2 + 6) & 0x80) != 0) {
    piVar6[1] = piVar6[1] + 0x100;
  }
  if ((*(ushort *)(iVar2 + 6) & 0x20) != 0) {
    *piVar6 = *piVar6 + DAT_080daf84;
  }
  if ((*(ushort *)(iVar2 + 6) & 0x10) != 0) {
    *piVar6 = *piVar6 + 0x100;
  }
  bVar4 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar4;
  if ((bVar4 & 1) == 0) {
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


