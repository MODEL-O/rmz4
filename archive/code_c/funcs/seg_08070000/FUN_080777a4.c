// undefined FUN_080777a4(void)
// entry 0x80777a4


undefined4 FUN_080777a4(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  undefined1 *local_28 [2];
  
  FUN_08129258(auStack_40,DAT_0807792c,9);
  FUN_08129258(auStack_34,DAT_08077930,9);
  local_28[0] = auStack_40;
  local_28[1] = auStack_34;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 200) + 0xb5) = 6;
    *(undefined1 *)(*(int *)(param_1 + 200) + 0xb6) = 1;
    FUN_08078fdc(param_1,0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0xc5);
  bVar2 = *(byte *)(param_1 + 0x13);
  iVar8 = *(int *)(param_1 + 0xb8) +
          *(int *)((uint)(byte)local_28[bVar1][bVar2] * 8 + DAT_08077934) + 0x7800;
  iVar9 = *(int *)(param_1 + 0xbc) +
          *(int *)((uint)(byte)local_28[bVar1][bVar2] * 8 + DAT_08077934 + 4) + 0x5000;
  if (*(int *)(param_1 + 0x5c) == 0) {
    iVar6 = iVar8 - *(int *)(param_1 + 0x54);
    iVar5 = iVar9 - *(int *)(param_1 + 0x58);
    uVar3 = FUN_08128bf4(iVar6 * iVar6 + iVar5 * iVar5);
    uVar4 = FUN_08129120(uVar3,*(undefined2 *)((uint)*(byte *)(param_1 + 0xd7) * 2 + DAT_08077938));
    uVar4 = uVar4 & 0xffff;
    *(int *)(param_1 + 100) = iVar8 - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = iVar9 - *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x60) = uVar4;
    *(uint *)(param_1 + 0x5c) = uVar4;
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 1;
    }
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_08077940) * 4 +
                        DAT_0807793c)));
  FUN_08078f64(param_1);
  if (*(int *)(param_1 + 0x5c) != 0) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  }
  iVar6 = *(int *)(param_1 + 0x5c);
  uVar7 = *(undefined4 *)(param_1 + 0x60);
  iVar5 = FUN_08128fb8(*(int *)(param_1 + 100) * iVar6,uVar7);
  *(int *)(param_1 + 0x54) = iVar8 - iVar5;
  iVar8 = FUN_08128fb8(*(int *)(param_1 + 0x68) * iVar6,uVar7);
  *(int *)(param_1 + 0x58) = iVar9 - iVar8;
  if (iVar6 == 0) {
    uVar4 = bVar2 + 1;
    if (local_28[bVar1][uVar4 & 0xff] == -1) {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *(char *)(param_1 + 0x13) = (char)uVar4;
    }
  }
  return in_lr;
}


