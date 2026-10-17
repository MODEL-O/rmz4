// undefined FUN_08077958(void)
// entry 0x8077958


undefined4 FUN_08077958(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08078fdc(param_1,0);
    bVar1 = *(byte *)(param_1 + 0xc5) + 1 & 1;
    uVar4 = FUN_08079048(param_1,bVar1);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    iVar5 = FUN_08079078(param_1,bVar1);
    *(int *)(param_1 + 0x60) = iVar5;
    iVar6 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 100) = iVar6;
    iVar5 = iVar5 - *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x68) = iVar5;
    uVar3 = FUN_08128bf4(iVar6 * iVar6 + iVar5 * iVar5);
    cVar2 = FUN_08129120(uVar3,*(undefined2 *)((uint)*(byte *)(param_1 + 0xd7) * 2 + DAT_08077a6c));
    *(char *)(param_1 + 0x13) = cVar2;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
    *(byte *)(param_1 + 0xc5) = bVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_08077a74) * 4 +
                        DAT_08077a70)));
  FUN_08078f64(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar5 = FUN_08128fb8((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 100),
                       *(undefined1 *)(param_1 + 0x13));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) - iVar5;
  iVar5 = FUN_08128fb8((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x68),
                       *(undefined1 *)(param_1 + 0x13));
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) - iVar5;
  if (*(char *)(param_1 + 0x12) == '\0') {
    pbVar7 = (byte *)(param_1 + 0xd7);
    bVar1 = *pbVar7;
    *pbVar7 = bVar1 + 1;
    if (3 < (byte)(bVar1 + 1)) {
      *pbVar7 = 3;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


