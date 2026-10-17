// undefined FUN_080df0d8(void)
// entry 0x80df0d8


undefined4 FUN_080df0d8(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *DAT_080df120;
  iVar5 = *(int *)(param_1 + 0x2c);
  FUN_0801cff0(param_1);
  if ((((*(ushort *)(DAT_080df124 + 8) & 8) == 0) && (*(int *)(iVar4 + 0xec) != 0)) &&
     (*(byte *)(iVar5 + 0xc) < 2)) {
    if ((*(byte *)(iVar4 + 10) & 0x10) == 0) {
      iVar5 = *(int *)(iVar4 + 0x54) +
              (int)*(short *)((uint)*(byte *)(iVar4 + 0x174) * 2 + DAT_080df1ac);
    }
    else {
      iVar5 = *(int *)(iVar4 + 0x54) -
              (int)*(short *)((uint)*(byte *)(iVar4 + 0x174) * 2 + DAT_080df150);
    }
    *(int *)(param_1 + 0x54) = iVar5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 100);
    piVar3 = DAT_080df208;
    if (*(char *)(param_1 + 0xd) == '\0') {
      iVar5 = *(int *)(param_1 + 0x58) + DAT_080df1b0;
      *(int *)(param_1 + 0x58) = iVar5;
      piVar3 = DAT_080df1b4;
      iVar4 = *(int *)(*DAT_080df1b4 + 0x58) + *(int *)(param_1 + 0x68) +
              (int)*(short *)((uint)*(byte *)(iVar4 + 0x174) * 2 + DAT_080df1b8);
      if (iVar5 < iVar4) {
        *(int *)(param_1 + 0x58) = iVar4;
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
    }
    else {
      *(int *)(param_1 + 0x58) =
           *(int *)(*DAT_080df208 + 0x58) + *(int *)(param_1 + 0x68) +
           (int)*(short *)((uint)*(byte *)(iVar4 + 0x174) * 2 + DAT_080df20c);
    }
    cVar1 = FUN_0802b700(*piVar3);
    bVar2 = cVar1 + *(char *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2;
    if (0x10 < bVar2) {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080df210);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_080decf8(param_1);
    }
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080df128);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080decf8(param_1);
  }
  return in_lr;
}


