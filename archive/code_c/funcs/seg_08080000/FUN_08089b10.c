// undefined FUN_08089b10(void)
// entry 0x8089b10


undefined4 FUN_08089b10(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08089b84);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    local_34 = *(undefined4 *)(param_1 + 0x54);
    local_30 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d89e0(&local_34,*(byte *)(param_1 + 10) >> 4 & 1,*(undefined1 *)(param_1 + 0xc0));
    if (*(int *)(param_1 + 0xb4) < 0) {
      FUN_080d0dc4(0,&local_34,0x200,0);
    }
    else {
      FUN_080d0dc4(0,&local_34,0x200,1);
    }
    FUN_0802ab88(3,0x31,param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x12) = 0x24;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  sVar3 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar3 == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') {
      return in_lr;
    }
    local_34 = *(undefined4 *)(param_1 + 0x54);
    local_30 = *(int *)(param_1 + 0x58);
    FUN_080d0c88(2,&local_34);
    uVar7 = DAT_08089d24 * *DAT_08089d20 + DAT_08089d28;
    *DAT_08089d20 = uVar7 & 0x7fffffff;
    uVar7 = (uVar7 & 0x7fffffff) >> 0x10 & 3;
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(undefined4 *)(param_1 + 0x58);
    puVar4 = &local_24;
    FUN_080d8a6c(puVar4,*(byte *)(param_1 + 10) >> 4 & 1,DAT_08089d2c,uVar7,0);
    FUN_080d8a6c(puVar4,*(byte *)(param_1 + 10) >> 4 & 1,DAT_08089d30,uVar7,0);
    bVar1 = *(byte *)(param_1 + 10);
    uVar6 = DAT_08089d34;
  }
  else {
    local_34 = *(undefined4 *)(param_1 + 0x54);
    local_30 = *(int *)(param_1 + 0x58) + DAT_08089c38;
    FUN_080d0c88(2,&local_34);
    uVar7 = DAT_08089c40 * *DAT_08089c3c + DAT_08089c44;
    *DAT_08089c3c = uVar7 & 0x7fffffff;
    uVar7 = (uVar7 & 0x7fffffff) >> 0x10 & 3;
    local_2c = *(undefined4 *)(param_1 + 0x54);
    local_28 = *(undefined4 *)(param_1 + 0x58);
    puVar4 = &local_2c;
    FUN_080d8a6c(puVar4,*(byte *)(param_1 + 10) >> 4 & 1,DAT_08089c48,uVar7,0);
    FUN_080d8a6c(puVar4,*(byte *)(param_1 + 10) >> 4 & 1,DAT_08089c4c,uVar7,0);
    bVar1 = *(byte *)(param_1 + 10);
    uVar6 = DAT_08089c50;
  }
  FUN_080d8a6c(puVar4,bVar1 >> 4 & 1,uVar6,uVar7,0);
  FUN_08002b10(0x2a);
  if (*(ushort *)(DAT_08089d38 + 0xc) <= DAT_08089d3c) {
    *(ushort *)(DAT_08089d38 + 0xc) = *(ushort *)(DAT_08089d38 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08089d40);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0x10);
  return in_lr;
}


