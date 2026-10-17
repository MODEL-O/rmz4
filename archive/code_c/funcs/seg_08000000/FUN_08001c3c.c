// undefined FUN_08001c3c(void)
// entry 0x8001c3c


undefined4 FUN_08001c3c(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  uint local_18;
  
  piVar2 = DAT_08001ccc;
  piVar1 = DAT_08001cc8;
  iVar7 = *DAT_08001cc8;
  iVar6 = DAT_08001cc8[0x32];
  if (iVar6 != 0) {
    *DAT_08001ccc = iVar6;
    piVar2[1] = piVar1[0x33] + 0x6000000;
    uVar3 = piVar1[0x31];
    piVar2[2] = uVar3 >> 2 | 0x84000000;
    local_18 = piVar1[0x34];
    *piVar2 = (int)&local_18;
    piVar2[1] = iVar6;
    piVar2[2] = uVar3 >> 2 | 0x85000000;
  }
  uVar3 = DAT_08001cd0;
  if (iVar7 != 0) {
    iVar6 = iVar7 * 0xc;
    do {
      iVar6 = iVar6 + -0xc;
      iVar7 = iVar7 + -1;
      puVar5 = (uint *)(iVar6 + DAT_08001cd4);
      if ((*puVar5 & 3) == 0) {
        FUN_08001d30(puVar5[2],puVar5[1]);
      }
      else if ((*puVar5 & 3) == 1) {
        uVar4 = *puVar5 >> 2;
        if (uVar4 < 0x20) {
          FUN_08128be4(puVar5[2],puVar5[1] + 0x6000000,*puVar5 >> 3 & uVar3);
        }
        else {
          FUN_08128be0(puVar5[2],puVar5[1] + 0x6000000,(int)uVar4 >> 2 & uVar3);
        }
      }
      else {
        local_18 = puVar5[2];
        FUN_08128be0(&local_18,puVar5[1] + 0x6000000,(int)(*puVar5 >> 2) >> 2 & uVar3 | 0x1000000);
      }
    } while (iVar7 != 0);
  }
  *DAT_08001d2c = 0;
  return in_lr;
}


