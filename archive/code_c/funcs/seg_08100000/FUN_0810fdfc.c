// undefined FUN_0810fdfc(void)
// entry 0x810fdfc


undefined4 FUN_0810fdfc(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)(param_1 + 8);
  iVar4 = FUN_08000a70(0x140);
  iVar6 = DAT_0810ff28;
  if (iVar4 != 0) {
    *(int *)(DAT_0810ff28 + 0x174) = iVar4;
    *(undefined4 *)(iVar6 + 0x178) = DAT_0810ff2c;
    *(undefined4 *)(iVar6 + 0x17c) = DAT_0810ff30;
    puVar5 = (undefined2 *)(iVar4 + 0x1e);
    do {
      *puVar5 = 0x1000;
      puVar5 = puVar5 + -1;
    } while (iVar4 <= (int)puVar5);
    iVar6 = 0x10;
    puVar7 = (ushort *)(iVar4 + 0x20);
    do {
      uVar3 = FUN_08128fb8(iVar6 + -0x10,3);
      *puVar7 = uVar3 | 0x1000;
      uVar2 = DAT_0810ff34;
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x40);
    if (iVar6 < 0x60) {
      puVar5 = (undefined2 *)(iVar6 * 2 + iVar4);
      do {
        *puVar5 = (short)uVar2;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x60);
    }
    if (iVar6 < 0x90) {
      puVar7 = (ushort *)(iVar6 * 2 + iVar4);
      do {
        uVar3 = FUN_08128fb8(0x90 - iVar6,3);
        *puVar7 = uVar3 | 0x1000;
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x90);
    }
    if (iVar6 < 0xa0) {
      puVar5 = (undefined2 *)(iVar6 * 2 + iVar4);
      do {
        *puVar5 = 0x1000;
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0xa0);
    }
  }
  uVar3 = *(ushort *)(param_1 + 8);
  if (((DAT_0810ff38 & uVar3) == 0) && ((int)((uint)uVar3 << 0x10) >> 0x1a < 6)) {
    iVar6 = (((int)((uint)uVar1 << 0x10) >> 0x12) << 0x10) >> 0x19;
    if ((uVar3 & 0x400) == 0) {
      FUN_08001d30(iVar6 * 0x28 + DAT_0810ffa4,(*DAT_0810ffa8 & 0xc) << 0xc);
      FUN_08002208(iVar6 * 0x28 + DAT_0810ffac,0);
      FUN_08002734(0x24,DAT_0810ffb0,iVar6 * 0x2000000 + 0xa8000000U >> 0x18,0,0x20);
    }
    else {
      FUN_08001d30(iVar6 * 0x28 + DAT_0810ff3c,(*DAT_0810ff40 & 0xc) << 0xc);
      FUN_08002208(iVar6 * 0x28 + DAT_0810ff44,0);
      FUN_08002734(0x12,DAT_0810ff48,iVar6 * 0x2000000 + 0xa9000000U >> 0x18,0,0);
    }
  }
  puVar7 = DAT_0810ffb4;
  uVar1 = (short)uVar1 >> 2 & 0x1ff;
  DAT_0810ffb4[2] = uVar1;
  *puVar7 = uVar1;
  return in_lr;
}


