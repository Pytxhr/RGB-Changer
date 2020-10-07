int red = 255, green = 0, blue = 255, rgb = 1;
	bool rF = true, gF, bF = true, rF_, gF_, bF_;
	void performRGBChange() {
		switch (rgb) {
			case 0: {
				if (gF) {
					green--;
					if (!green) { gF = !gF;  rF_ = !rF_; }
				break; }

				if (red < 255 && rF_) red++;
				else { rgb++; red = 255; rF = !rF; rF_ = !rF_; }
			break; }
			case 1: {
				if (bF) {
					blue--;
					if (!blue) { bF = !bF; gF_ = !gF_; }
				break; }

				if (green < 255 && gF_) green++;
				else { rgb++; green = 255; gF = !gF; gF_ = !gF_; }
			break;}
			case 2: {
				if (rF) {
					red--;
					if (!red) { rF = !rF; bF_ = !bF_; }
				break; }

				if (blue < 255 && bF_) blue++;
				else { rgb = 0; blue = 255; bF = !bF; bF_ = !bF_; }
			}
		}
