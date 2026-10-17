// undefined FUN_080771a0(void)
// entry 0x80771a0


undefined4 FUN_080771a0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 in_lr;
  
  cVar4 = '\x01';
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08006984(0x3e);
  }
  if (*(char *)(param_1 + 199) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0xcc) + 0xbc) != '\0') {
      FUN_08002b10(DAT_08077234);
      goto LAB_080771f0;
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0xcc) + 0xbc) == '\0') {
    FUN_08002b5c(DAT_080771d8);
    cVar4 = '\0';
LAB_080771f0:
    *(char *)(param_1 + 199) = cVar4;
  }
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((*(ushort *)(DAT_08077238 + 8) & 8) == 0)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0807723c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08078dc4(param_1);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0807725c:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0807726e;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar2 = FUN_0802adac(0x1a,param_1,DAT_08077284);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    goto LAB_0807725c;
  }
  iVar3 = FUN_0802b3e4();
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0807726e:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08077288));
  return in_lr;
}


