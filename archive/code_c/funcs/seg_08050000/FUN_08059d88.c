// undefined FUN_08059d88(void)
// entry 0x8059d88


undefined4 FUN_08059d88(int param_1)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xbd) = 0;
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08006984(0x40);
  }
  iVar5 = *(int *)(param_1 + 200);
  if (iVar5 != 0) {
    cVar1 = *(char *)(param_1 + 0xbf);
    if (((((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x04')) ||
        ((cVar1 == '\x05' || (cVar1 == '\x03')))) && (1 < *(byte *)(iVar5 + 0xc))) {
      *(int *)(param_1 + 200) = 0;
      *(char *)(param_1 + 0xbf) = -1;
    }
  }
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((((*puVar3 & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar2 = (byte)*(ushort *)(DAT_08059e28 + 8) & 8, (*(ushort *)(DAT_08059e28 + 8) & 8) == 0)) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08059e2c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    if ((*puVar3 & 0x10000) == 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0xe) = bVar2;
      *(byte *)(param_1 + 0xf) = bVar2;
    }
    FUN_0805b924(param_1);
    return in_lr;
  }
  if ((*puVar3 & 1) == 0) {
LAB_08059e7a:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_08059e8c;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    iVar5 = FUN_0802adac(0xb,param_1,DAT_08059ea8);
    *(int *)(param_1 + 0x2c) = iVar5;
    if (iVar5 == 0) goto LAB_08059e8c;
    bVar2 = *(byte *)(param_1 + 0xd);
    if ((bVar2 != 1) && (((bVar2 == 0 || (10 < bVar2)) || (bVar2 < 8)))) {
      *(undefined1 *)(param_1 + 0xd) = 10;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    goto LAB_08059e7a;
  }
  iVar5 = FUN_0802b3e4();
  if (iVar5 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_08059e8c:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08059eac));
  FUN_0805c270(param_1);
  return in_lr;
}


