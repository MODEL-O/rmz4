// undefined FUN_080d5b64(void)
// entry 0x80d5b64


undefined4 FUN_080d5b64(int param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  undefined4 in_lr;
  
  puVar1 = DAT_080d5bbc;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_080d5bbc = *DAT_080d5bbc | 0x4000;
    *(undefined1 *)((int)puVar1 + 0xd) = 0x31;
    *(byte *)(puVar1 + 7) = (byte)puVar1[7] | 0xe;
    *(undefined1 *)(param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0x75) = 0;
    *(undefined1 *)(param_1 + 0x76) = 0;
    *(undefined1 *)(param_1 + 0x7a) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar2 = DAT_080d5bc0;
  if ((*(ushort *)(DAT_080d5bc0 + 6) & 0x200) == 0) {
    if ((*(ushort *)(DAT_080d5bc0 + 6) & 0x100) == 0) goto LAB_080d5bde;
    iVar5 = *(byte *)(param_1 + 0x7a) + 1;
  }
  else {
    iVar5 = *(byte *)(param_1 + 0x7a) + 2;
  }
  uVar3 = FUN_08129050(iVar5,3);
  *(undefined1 *)(param_1 + 0x7a) = uVar3;
LAB_080d5bde:
  bVar4 = *(byte *)(param_1 + 0x7a);
  if (bVar4 == 1) {
    piVar6 = (int *)(param_1 + 100);
  }
  else if ((bVar4 < 2) && (bVar4 == 0)) {
    piVar6 = (int *)(param_1 + 0x54);
  }
  else {
    piVar6 = (int *)(param_1 + 0x5c);
  }
  if ((*(ushort *)(iVar2 + 6) & 0x40) != 0) {
    piVar6[1] = piVar6[1] + DAT_080d5c68;
  }
  if ((*(ushort *)(iVar2 + 6) & 0x80) != 0) {
    piVar6[1] = piVar6[1] + 0x100;
  }
  if ((*(ushort *)(iVar2 + 6) & 0x20) != 0) {
    *piVar6 = *piVar6 + DAT_080d5c68;
  }
  if ((*(ushort *)(iVar2 + 6) & 0x10) != 0) {
    *piVar6 = *piVar6 + 0x100;
  }
  bVar4 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar4;
  if ((bVar4 & 1) == 0) {
    uVar3 = 0x18;
    *(undefined1 *)(param_1 + 0x74) = 0x18;
    *(undefined1 *)(param_1 + 0x75) = 0x1f;
  }
  else {
    uVar3 = 0x1f;
    *(undefined1 *)(param_1 + 0x74) = 0x1f;
    *(undefined1 *)(param_1 + 0x75) = 0x1f;
  }
  *(undefined1 *)(param_1 + 0x76) = uVar3;
  return in_lr;
}


