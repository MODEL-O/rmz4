// undefined FUN_080620fc(void)
// entry 0x80620fc


undefined4 FUN_080620fc(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xb5) = 0;
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08006984(0x41);
  }
  iVar3 = *(int *)(param_1 + 0xc4);
  if ((iVar3 != 0) && (1 < *(byte *)(iVar3 + 0xc))) {
    *(int *)(param_1 + 0xc4) = 0;
  }
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((((*puVar4 & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     (bVar1 = (byte)*(ushort *)(DAT_08062180 + 8) & 8, (*(ushort *)(DAT_08062180 + 8) & 8) == 0)) {
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08062184);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
    if ((*puVar4 & 0x10000) == 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(byte *)(param_1 + 0xe) = bVar1;
      *(byte *)(param_1 + 0xf) = bVar1;
    }
    FUN_08065598(param_1);
    return in_lr;
  }
  if ((*puVar4 & 1) == 0) {
LAB_080621fa:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0806220c;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    if (((0xc < *(byte *)(param_1 + 0xd)) || (*(byte *)(param_1 + 0xd) < 0xb)) &&
       ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20)) {
      FUN_08066598(param_1);
    }
    if (*(char *)(param_1 + 0xd) == '\x04') {
      if (*(char *)(param_1 + 0xcf) == '\0') goto LAB_080621f0;
      *(undefined1 *)(param_1 + 0xce) = 0;
      uVar2 = 0xc;
    }
    else {
      if (*(char *)(param_1 + 0xd) != '\n') goto LAB_080621fa;
LAB_080621f0:
      uVar2 = 0xb;
    }
    *(undefined1 *)(param_1 + 0xd) = uVar2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    goto LAB_080621fa;
  }
  iVar3 = FUN_0802b3e4();
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0806220c:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08062228));
  *(undefined1 *)(param_1 + 0xcf) = 0;
  return in_lr;
}


