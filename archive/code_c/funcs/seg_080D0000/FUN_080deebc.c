// undefined FUN_080deebc(void)
// entry 0x80deebc


undefined4 FUN_080deebc(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(byte *)(iVar3 + 0xc) < 2) &&
     (CONCAT11(*(undefined1 *)(iVar3 + 0x1e),*(undefined1 *)(iVar3 + 0x70)) != DAT_080deef8)) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x13) << 6;
      *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x13) << 6;
      if (*(char *)(param_1 + 0x13) == '\x04') {
        FUN_0801cc9c(param_1);
        FUN_0801ceec(param_1);
        FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080def48));
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else if (*(byte *)(param_1 + 0x12) < 4) {
      *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 0x13) << 6;
      *(ushort *)(param_1 + 0x52) = (ushort)*(byte *)(param_1 + 0x13) << 6;
    }
    FUN_0801cff0(param_1);
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080def94);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      FUN_080decf8(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080deefc);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


