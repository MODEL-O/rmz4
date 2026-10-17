// undefined FUN_080de6c4(void)
// entry 0x80de6c4


undefined4 FUN_080de6c4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x2c);
  puVar7 = (undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x58);
  iVar6 = 1;
  do {
    *puVar7 = puVar7[2];
    puVar7[1] = puVar7[3];
    puVar7 = puVar7 + 2;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar9 + 0x54);
    uVar3 = *(undefined4 *)(iVar9 + 0x58);
  }
  else {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar9 + 0x74);
    uVar3 = *(undefined4 *)(iVar9 + 0x78);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(ushort *)(param_1 + 0x48) =
       (ushort)DAT_080de744 & *(ushort *)(param_1 + 0x48) | *(ushort *)(iVar8 + 0x48) & 0x3ff;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar8 + 0x3c);
  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(iVar8 + 0x4e);
  bVar1 = *(byte *)(iVar8 + 10) >> 4;
  bVar5 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
  if ((*(byte *)(iVar9 + 10) & 1) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  if ((*(char *)(param_1 + 0x10) != '\0') && (1 < *(byte *)(iVar9 + 0xc))) {
    *(undefined1 *)(param_1 + 0x11) = 2;
  }
  if (*(char *)(param_1 + 0x11) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080de7d0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
  }
  else if ((*(char *)(param_1 + 0x11) != '\0') &&
          (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1))
  {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080de808);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080de80c(param_1);
  }
  return in_lr;
}


