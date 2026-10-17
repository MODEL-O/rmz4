// undefined FUN_081069ec(void)
// entry 0x81069ec


undefined4 FUN_081069ec(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if ((1 < bVar1) || (bVar1 != 0)) goto LAB_08106a8a;
    iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar2 = iVar2 + DAT_08106ab4;
    *(int *)(param_1 + 0x58) = iVar2;
    *(int *)(param_1 + 0x68) = iVar2;
    *(undefined2 *)(DAT_08106ab8 + 0x18) = 0x300;
    iVar2 = DAT_08106abc;
    *(undefined2 *)(DAT_08106abc + 0x18) = 5;
    FUN_08001d30(DAT_08106ac0,(0x300 - (uint)(*(ushort *)(DAT_08106ac0 + 6) >> 6)) * 0x20 + 0x10000)
    ;
    FUN_08002208(DAT_08106ac4,
                 ((uint)*(ushort *)(iVar2 + 0x18) - (uint)*(byte *)(DAT_08106ac4 + 7)) * 0x20 +
                 0x200);
    FUN_0801cf00(param_1,0xc00);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    iVar2 = 0;
    do {
      iVar3 = FUN_08105720(param_1,9);
      *(char *)(iVar3 + 0x11) = (char)iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
LAB_08106a8a:
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x68) +
       (*(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_08106ac8) * 0x2ff >> 8);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}


