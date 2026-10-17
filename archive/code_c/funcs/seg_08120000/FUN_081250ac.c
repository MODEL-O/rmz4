// undefined FUN_081250ac(void)
// entry 0x81250ac


undefined8 FUN_081250ac(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  iVar4 = param_1 + DAT_081250c8;
  bVar1 = *(byte *)(iVar4 + 0x19);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        uVar3 = FUN_080d3ebc(0);
        *(undefined4 *)(iVar4 + 4) = uVar3;
        FUN_08002b10(0x1e);
        FUN_08002b10(0xa3);
        *(char *)(iVar4 + 0x19) = *(char *)(iVar4 + 0x19) + '\x01';
      }
      else if ((bVar1 == 3) && (1 < *(byte *)(*(int *)(iVar4 + 4) + 0xc))) {
        *(char *)(iVar4 + 0x18) = *(char *)(iVar4 + 0x18) + '\x01';
        *(undefined1 *)(iVar4 + 0x19) = 0;
        *(undefined4 *)(iVar4 + 0x24) = 1;
        local_14 = *(int *)(param_1 + DAT_081251ac);
        local_10 = ((int *)(param_1 + DAT_081251ac))[1] + 0x3000;
        FUN_08104c9c(&local_14,0,param_1);
        local_14 = local_14 + DAT_081251b0;
        local_10 = local_10 + 0x1000;
        uVar5 = 1;
        do {
          local_14 = local_14 + 0x1000;
          FUN_08104c9c(&local_14,uVar5 << 8,param_1);
          if ((uVar5 == 2) || (uVar5 == 5)) {
            local_14 = local_14 + 0x3000;
          }
          uVar5 = uVar5 + 1 & 0xff;
        } while (uVar5 < 8);
      }
      goto LAB_08125192;
    }
    if (bVar1 != 0) goto LAB_08125192;
    *(undefined1 *)(iVar4 + 0x1c) = 0x3c;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    *(char *)(iVar4 + 0x19) = *(char *)(iVar4 + 0x19) + '\x01';
  }
  iVar4 = param_1 + DAT_081250fc;
  cVar2 = *(char *)(iVar4 + 0x1c) + -1;
  *(char *)(iVar4 + 0x1c) = cVar2;
  if (cVar2 == -1) {
    *(char *)(iVar4 + 0x19) = *(char *)(iVar4 + 0x19) + '\x01';
  }
LAB_08125192:
  *(undefined1 *)(*(int *)(param_1 + DAT_081251b4) + 0x254) = 1;
  return CONCAT44(in_lr,1);
}


