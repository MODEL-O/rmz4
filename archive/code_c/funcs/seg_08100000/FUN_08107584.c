// undefined FUN_08107584(void)
// entry 0x8107584


undefined4 FUN_08107584(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined2 *)(DAT_0810760c + 0x1a) = 0x280;
    iVar2 = DAT_08107610;
    *(undefined2 *)(DAT_08107610 + 0x1a) = 7;
    FUN_08001d30(DAT_08107614,(0x280 - (uint)(*(ushort *)(DAT_08107614 + 6) >> 6)) * 0x20 + 0x10000)
    ;
    FUN_08002208(DAT_08107618,
                 ((uint)*(ushort *)(iVar2 + 0x1a) - (uint)*(byte *)(DAT_08107618 + 7)) * 0x20 +
                 0x200);
    FUN_0801cf00(param_1,0xd00);
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + 0x1200;
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + DAT_0810761c;
    *(undefined4 *)(param_1 + 0x60) = DAT_08107620;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_08107660;
  FUN_0801cff0(param_1);
  uVar1 = DAT_08107680;
  if (*(int *)(param_1 + 0x60) < 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    iVar2 = *(int *)(param_1 + 0x54) + 0x140;
  }
  else {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_08107680) {
      FUN_08002b10(0x35);
      FUN_08002b10(0x132);
      FUN_0801cf00(param_1,uVar1);
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 4;
    iVar2 = *(int *)(param_1 + 0x54) + 0x14;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
LAB_08107660:
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08107684);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


