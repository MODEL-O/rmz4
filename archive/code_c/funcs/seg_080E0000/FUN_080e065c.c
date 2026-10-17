// undefined FUN_080e065c(void)
// entry 0x80e065c


undefined4 FUN_080e065c(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short *psVar9;
  undefined4 in_lr;
  short local_24 [4];
  int local_1c;
  
  psVar8 = local_24;
  psVar9 = local_24;
  FUN_08129258(local_24,DAT_080e069c,6);
  bVar1 = *(byte *)(param_1 + 0x11);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e06a0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080e078c(param_1);
  }
  else {
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0xd) == '\0') {
      iVar7 = *(byte *)(param_1 + 0x12) - 0x20;
      uVar5 = FUN_08128fb8((0x30 - iVar7) * 0x40,0x30);
      iVar6 = (int)*(short *)((uVar5 & 0xff) * 2 + DAT_080e0730);
      *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) + ((uint)bVar1 * 2 + -1) * -0x1c * iVar6;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) + iVar6 * 6;
      if (iVar7 < 1) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      iVar6 = *(int *)(param_1 + 0x58) + DAT_080e0734;
      local_1c = 2;
      do {
        sVar3 = FUN_08007c7c(*(int *)(param_1 + 0x54) + (int)*psVar8,iVar6);
        if (sVar3 != 0) {
          *(undefined1 *)(param_1 + 0xd) = 2;
        }
        psVar8 = psVar8 + 1;
        local_1c = local_1c + -1;
      } while (-1 < local_1c);
    }
    else if (*(char *)(param_1 + 0xd) == '\x01') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar6 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar6;
      if (0x700 < iVar6) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      iVar6 = *(int *)(param_1 + 0x58) + DAT_080e0788;
      local_1c = 2;
      do {
        sVar3 = FUN_08007c7c(*(int *)(param_1 + 0x54) + (int)*psVar9,iVar6);
        if (sVar3 != 0) {
          *(undefined1 *)(param_1 + 0xd) = 2;
        }
        psVar9 = psVar9 + 1;
        local_1c = local_1c + -1;
      } while (-1 < local_1c);
    }
  }
  return in_lr;
}


