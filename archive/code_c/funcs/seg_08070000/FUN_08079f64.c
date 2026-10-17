// undefined FUN_08079f64(void)
// entry 0x8079f64


undefined4 FUN_08079f64(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  char cVar7;
  char *pcVar8;
  undefined4 in_lr;
  
  FUN_0801cff0();
  puVar3 = DAT_0807a068;
  puVar2 = DAT_08079fcc;
  piVar1 = DAT_08079fc8;
  if ((*(ushort *)(DAT_08079fbc + 8) & 8) == 0) {
    pcVar8 = (char *)(param_1 + 0xd9);
    if (*(int *)(*DAT_08079fc0 + 0x54) < *(int *)(DAT_08079fbc + 0x120) + DAT_08079fc4) {
LAB_08079f96:
      do {
        uVar6 = *puVar2 * DAT_08079fd0 + DAT_08079fd4;
        *puVar2 = uVar6 & 0x7fffffff;
        bVar4 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x12);
        if (bVar4 < 2) {
          uVar5 = 4;
        }
        else if (bVar4 < 4) {
          if ((*(int *)(param_1 + 200) != 0) || (*(int *)(param_1 + 0xcc) != 0)) goto LAB_08079f96;
          uVar5 = 5;
        }
        else if (bVar4 < 8) {
          uVar5 = 6;
        }
        else if (bVar4 < 10) {
          uVar5 = 7;
        }
        else if (bVar4 < 0xe) {
          uVar5 = 9;
        }
        else if (bVar4 < 0x10) {
          uVar5 = 10;
        }
        else {
          uVar5 = 0xb;
        }
        *(undefined1 *)(param_1 + 0xd) = uVar5;
      } while ((((*(byte *)(*piVar1 + 1) < 5) ||
                (cVar7 = *(char *)(param_1 + 0xd), (*(byte *)(DAT_0807a03c + 4) & 4) != 0)) &&
               (cVar7 = *(char *)(param_1 + 0xd), cVar7 == '\n')) || (*pcVar8 == cVar7));
    }
    else {
LAB_0807a042:
      do {
        uVar6 = *puVar3 * DAT_0807a06c + DAT_0807a070;
        *puVar3 = uVar6 & 0x7fffffff;
        bVar4 = FUN_08129198((uVar6 & 0x7fffffff) >> 0x10,0x12);
        if (bVar4 < 4) {
          uVar5 = 4;
        }
        else if (bVar4 < 7) {
          if ((*(int *)(param_1 + 200) != 0) || (*(int *)(param_1 + 0xcc) != 0)) goto LAB_0807a042;
          uVar5 = 5;
        }
        else if (bVar4 < 9) {
          uVar5 = 6;
        }
        else if (bVar4 < 0xe) {
          uVar5 = 7;
        }
        else if (bVar4 < 0x10) {
          uVar5 = 10;
        }
        else {
          uVar5 = 0xb;
        }
        *(undefined1 *)(param_1 + 0xd) = uVar5;
      } while ((((*(byte *)(*piVar1 + 1) < 5) ||
                (cVar7 = *(char *)(param_1 + 0xd), (*(byte *)(DAT_0807a0d8 + 4) & 4) != 0)) &&
               (cVar7 = *(char *)(param_1 + 0xd), cVar7 == '\n')) || (*pcVar8 == cVar7));
    }
    *pcVar8 = cVar7;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


