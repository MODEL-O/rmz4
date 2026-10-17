// undefined FUN_080d27d4(void)
// entry 0x80d27d4


undefined4 FUN_080d27d4(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar10 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x2c);
  puVar9 = (undefined4 *)(param_1 + 0x54);
  if ((*(int *)(param_1 + 0x54) == *(int *)(iVar10 + 0x54)) &&
     (*(int *)(param_1 + 0x58) == *(int *)(iVar10 + 0x58))) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined4 *)(param_1 + 0x74) = *puVar9;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x58);
  iVar7 = 1;
  do {
    *puVar9 = puVar9[2];
    puVar9[1] = puVar9[3];
    puVar9 = puVar9 + 2;
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar10 + 0x54);
    uVar5 = *(undefined4 *)(iVar10 + 0x58);
  }
  else {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar10 + 0x74);
    uVar5 = *(undefined4 *)(iVar10 + 0x78);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  *(ushort *)(param_1 + 0x48) =
       (ushort)DAT_080d2898 & *(ushort *)(param_1 + 0x48) | *(ushort *)(iVar4 + 0x48) & 0x3ff;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar4 + 0x3c);
  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(iVar4 + 0x4e);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  bVar8 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar8;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar8 << 4;
  if ((1 < *(byte *)(iVar10 + 0xc)) || ((*(byte *)(iVar4 + 10) & 1) == 0)) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar2 = 2;
    }
    else {
      uVar2 = *(undefined1 *)(iVar10 + 0x11);
    }
    *(undefined1 *)(param_1 + 0x11) = uVar2;
    *(int *)(param_1 + 0x28) = param_1;
  }
  if (*(char *)(param_1 + 0x11) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d2908);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 0xc);
  }
  else if ((*(char *)(param_1 + 0x11) != '\0') &&
          (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == -1))
  {
    piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d2948);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 8);
    FUN_080d294c(param_1);
  }
  return in_lr;
}


