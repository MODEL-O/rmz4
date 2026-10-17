// undefined FUN_08120d60(void)
// entry 0x8120d60


undefined8 FUN_08120d60(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar6 = param_1 + DAT_08120d84;
  uVar8 = (uint)*(byte *)(param_1 + DAT_08120d88 + (uint)*(byte *)(iVar6 + 2));
  bVar1 = *(byte *)(iVar6 + 0x12);
  if (bVar1 == 1) {
LAB_08120da6:
    iVar6 = param_1 + DAT_08120de8;
    puVar7 = (undefined2 *)(uVar8 * 8 + DAT_08120dec);
    bVar1 = *(byte *)((int)puVar7 + 5) >> 1;
    if (*(byte *)(iVar6 + 0x13) < bVar1) {
      bVar2 = *(byte *)(iVar6 + 0x13) + (*(byte *)((int)puVar7 + 5) >> 4);
      *(byte *)(iVar6 + 0x13) = bVar2;
      *(byte *)(iVar6 + 0x14) = (*(byte *)(puVar7 + 3) >> 4) + *(char *)(iVar6 + 0x14);
      bVar1 = *(byte *)((int)puVar7 + 5) >> 1;
      if (bVar1 < bVar2) {
        *(byte *)(iVar6 + 0x13) = bVar1;
      }
      if (*(byte *)(puVar7 + 3) >> 1 < *(byte *)(iVar6 + 0x14)) {
        *(byte *)(iVar6 + 0x14) = *(byte *)(puVar7 + 3) >> 1;
      }
    }
    else {
      *(byte *)(iVar6 + 0x13) = bVar1;
      *(byte *)(iVar6 + 0x14) = *(byte *)(puVar7 + 3) >> 1;
      FUN_0810cbd4(param_1,uVar8,*(undefined1 *)(puVar7 + 2),*puVar7,
                   (*(char *)(puVar7 + 1) + 0x40) * 0x100,
                   (*(char *)((int)puVar7 + 3) + 0x50) * 0x100,*(undefined1 *)((int)puVar7 + 7));
      *(char *)(iVar6 + 0x12) = *(char *)(iVar6 + 0x12) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(iVar6 + 0x13) = 0;
      *(undefined1 *)(iVar6 + 0x14) = 0;
      FUN_08002b10(2);
      *(char *)(iVar6 + 0x12) = *(char *)(iVar6 + 0x12) + '\x01';
      goto LAB_08120da6;
    }
  }
  else if (bVar1 == 2) {
    if ((*(ushort *)(DAT_08120e40 + 4) & 3) != 0) {
      FUN_08002b10(3);
      *(char *)(iVar6 + 0x12) = *(char *)(iVar6 + 0x12) + '\x01';
    }
  }
  else if (bVar1 == 3) {
    bVar1 = *(byte *)(iVar6 + 0x13);
    if (bVar1 == 0) {
      *(byte *)(iVar6 + 0x13) = bVar1;
      *(byte *)(iVar6 + 0x14) = bVar1;
      *(byte *)(iVar6 + 0x12) = bVar1;
      uVar4 = 1;
      goto LAB_08120e8e;
    }
    iVar5 = uVar8 * 8 + DAT_08120e70;
    iVar3 = (uint)bVar1 - (uint)(*(byte *)(iVar5 + 5) >> 4);
    if (iVar3 < 1) {
      *(undefined1 *)(iVar6 + 0x13) = 0;
      *(undefined1 *)(iVar6 + 0x14) = 0;
    }
    else {
      *(char *)(iVar6 + 0x13) = (char)iVar3;
      iVar3 = (uint)*(byte *)(iVar6 + 0x14) - (uint)(*(byte *)(iVar5 + 6) >> 4);
      if (iVar3 < 1) {
        *(undefined1 *)(iVar6 + 0x14) = 0;
      }
      else {
        *(char *)(iVar6 + 0x14) = (char)iVar3;
      }
    }
  }
  uVar4 = 0;
LAB_08120e8e:
  return CONCAT44(in_lr,uVar4);
}


